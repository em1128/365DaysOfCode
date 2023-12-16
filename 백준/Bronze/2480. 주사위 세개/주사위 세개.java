import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

        String s = input.readLine();
        StringTokenizer st = new StringTokenizer(s);
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());

        int prize = 0;

        if((A==B) ){
            int eyes = A;
            if(B==C) {
                prize += 10000;
                prize += eyes * 1000;
            }
            else {
                prize += 1000;
                prize += eyes * 100;
            }
        }
        else if((B==C)){
            int eyes = B;
            prize += 1000;
            prize += eyes * 100;
        }
        else if(A==C){
            int eyes = C;
            prize += 1000;
            prize += eyes * 100;
        }
        else{
            int eyes = Math.max(Math.max(A,B),C);
            prize += eyes * 100;
        }
        output.write(String.valueOf(prize));
        output.newLine();

        input.close();
        output.flush();
        output.close();
    }
}