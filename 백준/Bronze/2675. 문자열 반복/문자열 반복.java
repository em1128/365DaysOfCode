import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(input.readLine());
        BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));
        for(int i=0; i<T; ++i) {
            String[] line = input.readLine().split(" ", 2);
            int iter = Integer.parseInt(line[0]);
            for(int j=0; j<line[1].length(); ++j){
                char c = line[1].charAt(j);
                for(int k=0; k<iter; ++k){
                    output.write(c);
                }
            }
            output.write('\n');
        }
        input.close();
        output.flush();
        output.close();
    }
}