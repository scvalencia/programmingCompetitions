package trainingJava;

public class Mode {

	public static void main(String[] args) {
		int array[] = {1,4,5,7,8,9,3,2,5};
		System.out.println(mode(array));
	}
	
	public static int mode(int[] a) {
		int[] counts = new int[max(a) + 1];
		for(int i = 0; i < a.length; i++)
			counts[a[i]]++;
		int maxCount = 0, mode = 0;
		for(int i = 0; i < counts.length; i++)
			if(counts[i] > maxCount) {
				maxCount = counts[i];
				mode = i;
			}
		return mode;
	}
	
	public static int max(int[] a) {
		int ans = 0;
		for(int item : a) 
			if(item > ans)
				ans = item;
		return ans;
	}
	
	public static boolean binarySearch(int[] a, int item) {
		int start = 0, end = a.length - 1;
		
		while(end >= start) {
			int mid = (start + end)/2;
			if(a[mid] == item)
				return true;
			else if(a[mid] > item)
				end = mid - 1;
			else
				start = mid + 1;
		}
		return false;
	}
}
