import java.io.*;
import java.util.StringTokenizer;
public class Main {
    public static void main(String[] args) throws IOException  {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));
        String s = input.readLine();
        int i=0;
        if(s.charAt(i)=='I'){
            output.write('E');
        }else{
            output.write('I');
        }
        ++i;
        if(s.charAt(i)=='N'){
            output.write('S');
        }else{
            output.write('N');
        }
        ++i;
        if(s.charAt(i)=='F'){
            output.write('T');
        }else{
            output.write('F');
        }
        ++i;
        if(s.charAt(i)=='P'){
            output.write('J');
        }else{
            output.write('P');
        }


        input.close();
        output.flush();
        output.close();
    }
}