import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        int max = 0;
        for (int i = 0; i < str.length(); i++) {
            String temp = "";
            for (int j = i; j < str.length(); j++) {
                char ch = str.charAt(j);

                if (temp.indexOf(ch) != -1) {
                    break;
                }

                temp = temp + ch;

                if (temp.length() > max) {
                    max = temp.length();
                }
            }
        }

        System.out.println(max - 1);
    }
}