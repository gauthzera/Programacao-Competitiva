import java.util.*;

public class Main {
        public static void main(String[] args) {
                Locale.setDefault(Locale.US);
                Scanner sc=new Scanner(System.in);

                int m,n;
                int j=0; //corresponde ao índice do vetor

                char[] oitavas=new char[8]; //guarda todos os 8 times que passaram das oitavas
                for(int i=0;i<16;i+=2){ //i é resposável pelas leituras (8) e para formar a letra
                        m=sc.nextInt();
                        n=sc.nextInt();
                        if(m>n){    //adiciona o vencedor no array
                                oitavas[j]=(char) ('A'+i);
                        }else{
                                oitavas[j]=(char) ('B'+i);
                        }
                        j++; //incrementa o índice do vetor
                }

                char[] quartas=new char[4]; //guarda os times 4 que passaram das quartas
                for(int i=0;i<4;i++){
                        m=sc.nextInt();
                        n=sc.nextInt();

                        if(m>n){
                                quartas[i]=oitavas[i*2]; //multiplica por 2 pois o tamanho é metade do array "oitavas"
                        }else{
                                quartas[i]=oitavas[(i*2)+1]; //significa que o time do próximo índice ganhou, por isso soma 1

                        }
                }

                char[] semifinal=new char[2]; //os 2 times que passaram da semi
                for(int i=0;i<2;i++){
                        m=sc.nextInt();
                        n=sc.nextInt();

                        if(m>n){
                                semifinal[i]=quartas[i*2];
                        }else{
                                semifinal[i]=quartas[(i*2)+1];
                        }
                }

                m=sc.nextInt();
                n=sc.nextInt(); 
                    //verifica qual ganhou a final
                if(m>n){
                        System.out.println(semifinal[0]);
                }else{
                        System.out.println(semifinal[1]);
                }

                sc.close();
        }
}