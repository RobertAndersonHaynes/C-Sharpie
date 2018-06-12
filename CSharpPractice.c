// from https://www.learncs.org/

// Print "Hello, Wrold!"
using System;

public class Hello
{
    public static void Main()
    {
        System.Console.WriteLine("Hello, World!");
    }
}

// Define three variables:
//
// A string named productName equal to TV.
// An integer named productYear equal to 2012.
// A float named productPrice equal to 279.99f.

using System;

public class Tutorial
{
   public static void Main()
   {
      string productName = "TV";
      int productYear = 2012;
      float productPrice = 279.99f;
      Console.WriteLine("productName: " + productName);
      Console.WriteLine("productYear: " + productYear);
      Console.WriteLine("productPrice: " + productPrice);

   }

   // Define an array called fruits that holds the following strings: "apple", "banana", and "orange".

   using System;

public class Tutorial
{
   public static void Main()
   {
      string[] fruits = new string[3];
       fruits[0] = "apple";
       fruits[1] = "banana";
       fruits[2] = "orange";
      Console.WriteLine(fruits[0]);
      Console.WriteLine(fruits[1]);
      Console.WriteLine(fruits[2]);
   }
}

// Construct a list of the first 5 prime numbers (2, 3, 5, 7, 11) called primeNumbers.

using System;
using System.Collections.Generic;

public class Hello
{
    public static void Main()
    {
        List<int> primeNumbers = new List<int>();
        primeNumbers.Add(2);
        primeNumbers.Add(3);
        primeNumbers.Add(5);
        primeNumbers.Add(7);
        primeNumbers.Add(11);

        Console.WriteLine(primeNumbers.Count);
        Console.WriteLine(primeNumbers[0]);
        Console.WriteLine(primeNumbers[1]);
        Console.WriteLine(primeNumbers[2]);
        Console.WriteLine(primeNumbers[3]);
        Console.WriteLine(primeNumbers[4]);

    }
}

// Create a new dictionary called inventory that holds 3 names of fruits, and the amount they are in stock.
//
// Here is the inventory specification:
//
// 3 of type apple
// 5 of type orange
// 2 of type banana

using System;
using System.Collections.Generic;

public class Hello
{
    public static void Main()
    {
        Dictionary<string, int> inventory = new Dictionary<string, int>();
        inventory.Add("apple", 3);
        inventory.Add("orange", 5);
        inventory.Add("banana", 2);

        Console.WriteLine(inventory["apple"]);
        Console.WriteLine(inventory["orange"]);
        Console.WriteLine(inventory["banana"]);

    }
}

// Use string formatting to format the variables firstName, lastName and age to form the following sentence into the string sentence:
//
// John Doe is 27 years old.

using System;

public class Hello
{
    public static void Main()
    {
        string firstName = "John";
        string lastName = "Doe";
        int age = 27;

        string sentence = firstName + " " + lastName + " is " + age + " years old.";

        Console.WriteLine(sentence);

    }
}

// Print the value of variable X to the screen N number of times

using System;

public class Functions
{
    public static void Main()
    {
        string x = "Hi";
        int n = 10;

        for(int i = 0; i < n; i++)
        {
            Console.WriteLine(x);
        }
    }

}

// Print X to the console N time using a while loop

using System;

public class Functions
{
    public static void Main()
    {
        string x = "Hi";
        int n = 10;

        while(n > 0)
        {
            Console.WriteLine(x);
            n--;
        }
    }

}

// Write a method that divides two numbers (provided as parameters). Tip: you will need to use the modifiers public and static.

using System;

public class Methods
{
    public static void Main()
    {

        int x = 2;
        int y = 2;
        int a = foo(x,y);
        Console.WriteLine(a);

    }

    public static int foo(int x, int y)
    {

        return x / y;

    }
}

// Make a class car with the properties numTires = 4, year = 2000, and runs = true, and create three instances of it: car1, car2, and car3.

using System;
class car{
    public int numTires = 4;
    public int year = 2000;
    public bool runs = true;
}
public class MainClass{
    public static void Main(){

        car car1 = new car();
        car car2 = new car();
        car car3 = new car();
        Console.WriteLine(car1.numTires);
        Console.WriteLine(car2.year);
        Console.WriteLine(car3.runs);
    }
}

// Make a class Vehicle with the properties string Type, int NumTires, int Year, and bool Runs, and create:
// A car: Type = car with NumTires = 4 from Year = 2000 which Runs = true An oldcar: Type = car with NumTires = 4 from Year = 1980 which Runs = false A bike: Type = bike with NumTires = 2 from Year = 2017 which Runs = true

using System;

class Vehicle{
    public string Type;
    public int NumTires;
    public int Year;
    public bool Runs;
    public Vehicle(string type, int numtires, int year, bool runs){
     Type = type;
     NumTires = numtires;
     Year = year;
     Runs = runs;
    }

}

public class MainClass{
    public static void Main(){
        Vehicle car = new Vehicle("car", 4, 2000, true);
        Vehicle oldcar = new Vehicle("car", 4, 1980, false);
        Vehicle bike = new Vehicle("bike", 2, 2017, true);

        // Test code
        Console.WriteLine(car.Type);
        Console.WriteLine(oldcar.Runs);
        Console.WriteLine(bike.NumTires);
    }
}
