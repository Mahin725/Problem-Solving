using System;

class Program{
    public static void Main(string[] arg){
        int frist=Convert.ToInt32( Console.ReadLine());
        int secound = Convert.ToInt32(Console.ReadLine());
        int tmp = secound;
        secound = frist;
        frist = tmp;
        Console.WriteLine(frist);
        Console.WriteLine(secound);
        
    }
}