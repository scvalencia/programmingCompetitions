package trainingJava;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class DayByDate {
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
		String line;
		while((line = br.readLine()) != null) {
			String[] parse = line.split(" ");
			int day = Integer.parseInt(parse[0]);
			String month = parse[1];
			int year = Integer.parseInt(parse[2]);
			int d = day, y = year, m = getMonth(month);
			int yo = y - (14 - m)/12;
			int x = yo + yo/4 - yo/100 + yo/400;
			int mo = m + 12 * ((14 - m)/12) - 2;
			int d0 = (d + x + (31 * mo)/12) % 7;
			System.out.println(days[d0]);
		}
	}

	private static int getMonth(String month) {
		if(month.equals("January"))
			return 1;
		else if(month.equals("February"))
			return 2;
		else if(month.equals("March"))
			return 3;
		else if(month.equals("April"))
			return 4;
		else if(month.equals("May"))
			return 5;
		else if(month.equals("June"))
			return 6;
		else if(month.equals("July"))
			return 7;
		else if(month.equals("August"))
			return 8;
		else if(month.equals("September"))
			return 9;
		else if(month.equals("October"))
			return 10;
		else if(month.equals("November"))
			return 11;
		else if(month.equals("December"))
			return 12;
		return -1;
	}
}
