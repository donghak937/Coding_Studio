// SimpleChat Server
import java.net.*;				
import java.io.*;				
import java.util.*;			
import java.text.SimpleDateFormat;
import java.util.Calendar;	
				
public class ChatServer {				
				
	public static void main(String[] args) {			
		try{		
			ServerSocket server = new ServerSocket(10001);	
			System.out.println("Waiting Connections...");	
			HashMap hm = new HashMap();	
			while(true){	
				Socket sock = server.accept();
				ChatThread chatthread = new ChatThread(sock, hm);
				chatthread.start();
			} // while	
		}catch(Exception e){	
			System.out.println(e);
		}	
	} // main		
}			
			
class ChatThread extends Thread{
	public SimpleDateFormat nowone = new SimpleDateFormat("[HH:mm:ss]");			
	private Socket sock;		
	private String id;		
	private BufferedReader br;		
	private HashMap hm;		
	private boolean initFlag = false;		
	public ChatThread(Socket sock, HashMap hm){		
		this.sock = sock;	
		this.hm = hm;	
		try{	
			PrintWriter pw = new PrintWriter(new OutputStreamWriter(sock.getOutputStream()));	
			br = new BufferedReader(new InputStreamReader(sock.getInputStream()));	
			id = br.readLine();	
			broadcast(id + " entered.");	
			System.out.println("[Server log] " + id + " entered.");	
			synchronized(hm){	
				hm.put(this.id, pw);
			}	
			initFlag = true;	
		}catch(Exception ex){		
			System.out.println(ex);	
		}		
	}
	public String getTime(){
		Calendar cal = Calendar.getInstance();
		String now = nowone.format(cal.getTime());

		return now;
	} 			
	public void run(){	
			
		try{		
			
			String line = null;	
			while((line = br.readLine()) != null){
								
				if(line.equals("/quit"))
					break;
				if(line.indexOf("/to ") == 0){	
					sendmsg(line);
				}
				if(line.equals("/userlist")){
					findUser();
				}
				else	
					broadcast(getTime() + " " + id + " : " + line);
			}		
		}catch(Exception ex){			
			System.out.println(ex);		
		}finally{			
			synchronized(hm){		
				hm.remove(id);	
			}		
			broadcast(id + " exited.");		
           	System.out.println("[Server log] " + id + " exited.");	
			try{		
				if(sock != null)	
					sock.close();
			}catch(Exception ex){}		
		}			
	} // run				
	public void sendmsg(String msg){				
		int start = msg.indexOf(" ") +1;			
		int end = msg.indexOf(" ", start);			
		if(end != -1){			
			String to = msg.substring(start, end);		
			String msg2 = msg.substring(end+1);		
			Object obj = hm.get(to);		
			if(obj != null){		
				PrintWriter pw = (PrintWriter)obj;	
				pw.println(id + "'s secret message: " + msg2);	
				pw.flush();	
			} // if	
		}		
	} // sendmsg			
	public void broadcast(String msg){			
		synchronized(hm){		
			Collection collection = hm.values();	
			Iterator iter = collection.iterator();	
			while(iter.hasNext()){	
				PrintWriter pw = (PrintWriter)iter.next();
				pw.println(msg);
				pw.flush();
			}	
		}		
	} // broadcast		
	public void findUser(){
		synchronized(hm) { //이걸로 가지고 오고,
			PrintWriter pw = (PrintWriter) hm.get(id); //출력가능하게 프린트롸이터
			if (pw != null) {
				pw.println("There are " + hm.size() + " users.");
				for (Object key : hm.keySet()) {
					pw.print(key.toString() + " ");
				}
				pw.print("\n");
				pw.flush();
			}
		}
	}	
}				
