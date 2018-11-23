using System;
//aprender a recibir datos por pantalla
namespace ConsoleApp1
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Cúal es tu nombre: ");
            string nombre = Console.ReadLine();
            Console.WriteLine();
            Console.WriteLine("Cual es tu edad: ");
            int edad = int.Parse(Console.ReadLine());
            Console.WriteLine();
            Console.WriteLine(nombre);
            Console.WriteLine(edad);
            Console.WriteLine();
        }
    }
}
