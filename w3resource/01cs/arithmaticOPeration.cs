using System;

class Program{
    public static void Main(string[] arg){
        int frist=Convert.ToInt32( Console.ReadLine());
        int secound = Convert.ToInt32(Console.ReadLine());
        int sum = frist+secound;
        int sub = frist-secound;
        double div = frist/secound;
        int muliply = frist*secound;
        int mod = frist%secound;
        Console.WriteLine(frist +" + "+secound+" = "+ sum);
        Console.WriteLine(frist +" - "+secound+" = "+ sub);
        Console.WriteLine(frist +" / "+secound+" = "+ div);
        Console.WriteLine(frist +" * "+secound+" = "+ muliply);
        Console.WriteLine(frist +" % "+secound+" = "+ mod);
        
    }
}