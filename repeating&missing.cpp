/*package whatever //do not write package name here */

import java.util.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		int repeat=0;
		int missing=0;
		for(int i=0;i<n;i++)
		{
		    arr[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
		    if(i==n-1)
		    {
		        break;
		    }
		    if(arr[i]==arr[i+1])
		    {
		        repeat=arr[i];
		    }
		    if((arr[i+1]-arr[i])!=1)
		    {
		        missing=i+1;
		    }
		}
		System.out.println(repeat);
		System.out.println(missing);
	}
}