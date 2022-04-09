/*package whatever //do not write package name here */

import java.util.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		int x=sc.nextInt();
		for(int i=0;i<n;i++)
		{
		   a[i]=sc.nextInt(); 
		}
		
		for(int i=0;i<n;i++)
		{
		    if(a[i]==x)
		    {
		        
		        System.out.print(i+" ");
		    }
		}
	}
}