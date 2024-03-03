import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(input.readLine());
        BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

        for(int i=0; i<T; ++i) {
            int iter = input.read()-48; // '0' == 48
            char c = (char)input.read(); // read space(' ')
            while(true){
                c = (char)input.read();
                if(Character.compare(c,'\n') != 0 && c > 0){ // endline check & null check
                    for(int j=0; j<iter; ++j) output.write(c);
                }else{
                    break;
                }
            }
            output.write('\n');
        }
        input.close();
        output.flush();
        output.close();
    }
}