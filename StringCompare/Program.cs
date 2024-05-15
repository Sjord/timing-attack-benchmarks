using System;
using System.Diagnostics;
using System.Text;

class Program
{
    static void Main()
    {
        string secret = "1715762622-Mb12K2Epbm46OhMOmzhrBOueEPxCMB";
        int len = secret.Length;
        int result = 0;

        Console.WriteLine("# (Changed character index) (time in nanosecond per comparison)");

        for (int x = 0; x < len; x++)
        {
            StringBuilder input = new StringBuilder(secret);
            input[x] = 'é';
            var inputStr = input.ToString();

            Stopwatch sw = Stopwatch.StartNew();
            for (int i = 0; i < 1e8; i++)
                result ^= String.Compare(inputStr, secret, StringComparison.CurrentCulture);
            sw.Stop();

            Console.WriteLine($"{x} {10 * sw.ElapsedTicks / (double)Stopwatch.Frequency:F9}");
        }

        Console.WriteLine($"# result: {result}");
    }
}