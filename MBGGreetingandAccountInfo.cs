using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MBGGreetingandAccountInfo
{
    class MBGGreetingandAccountInfo
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Welcome to The Make-Build Guild Inc");
            Console.WriteLine("This program will display your account info");

            try
            {
                Console.WriteLine("Enter developers first and last name");
                string name = Console.ReadLine();
                Console.WriteLine("Enter developers Address");
                string address = Console.ReadLine();
                Console.WriteLine("Enter Gross Monthly Pay");
                double grossMonthlyPay = double.Parse(Console.ReadLine());
                double taxes = .07 * grossMonthlyPay;
                Console.WriteLine("Welcome to Software Key  " + (name +" " + address));
                Console.WriteLine("Your Gross pay is  " + (grossMonthlyPay + " And the taxes you paid for the month are" + taxes));
                Console.ReadLine();
            }

            catch
            {
                Console.WriteLine("Enter first and last name...");
            }

        }
    }
}
