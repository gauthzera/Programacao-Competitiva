import java.util.*;

public class Main {
	public static void main(String args[]) {
		Locale.setDefault(Locale.US);
		Scanner sc=new Scanner(System.in);
		
		int t=sc.nextInt();
		
		int pa=0,pb=0;
		double g1=0,g2=0;
		
		while(t-- >0) {
			pa=sc.nextInt();
			pb=sc.nextInt();
			g1=sc.nextDouble();
			g2=sc.nextDouble();
			
			int tempo=0;
			while(pa<=pb){
				pa+=pa*(g1/100);
				pb+=pb*(g2/100);
				tempo++;
				if(tempo==100)pb=pa-1; //para a contagem de acordo com enunciado
			}
			if(tempo>100) {
				System.out.println("Mais de 1 seculo.");
			}else {
				System.out.println(tempo + " anos.");
			}
			
		}
		
	}
}
