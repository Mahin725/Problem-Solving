// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;

public class HelloWorld
{
    public static void test(int x,int y){
        if(x==y){
            int sum = 3*(x+y);
            Console.WriteLine(sum);
        }else{
            Console.WriteLine(x+y);
        }
    }
    public static void Main(string[] args)
    {
        test(1,2);
        test(3,2);
        test(2,2);
    }
}