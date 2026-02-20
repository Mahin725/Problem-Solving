using System;

class Program{
    public static void Main(string[] arg){
        int frist=Convert.ToInt32( Console.ReadLine());
        for(int i=0;i<11;i++){
            int ans = frist*i;
           Console.WriteLine(frist +" * "+ i +" = "+ ans); 
        }
        
       
    }
}