/*package whatever //do not write package name here */

import java.util.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		
		for(int i=0;i<n;i++)
		{
		   a[i]=sc.nextInt(); 
		}
		int k=sc.nextInt();
		Arrays.sort(a);
		System.out.println(a[k-1]);
	}
}