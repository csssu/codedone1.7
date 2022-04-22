

/*
	@author: Amir Aghazadeh
*/


import java.util.Scanner;

public class ProblemG {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int n = scan.nextInt();
		String str = scan.next();

		String answer = "YES";
		String alphabets = "abcdefghijklmnopqrstuvwxyz";
		for (int i = 0; i < 26; i++) {
			if (!str.toLowerCase().contains(alphabets.substring(i, i + 1))) {
				answer = "NO";
				break;
			}
		}

		System.out.println(answer);
	}
}