// Source - https://stackoverflow.com/a
// Posted by Shane, modified by community. See post 'Timeline' for change history
// Retrieved 2026-01-05, License - CC BY-SA 3.0

 class Program
    {
        static void Main(string[] args)
        {
            int max = 1000000000;
            Stopwatch stopWatch = new Stopwatch();

            if (args.Length == 1 && args[0].ToString() == "While")
            {
                Console.WriteLine("While Loop: ");
                stopWatch.Start();
                WhileLoop(max);
                stopWatch.Stop();
                DisplayElapsedTime(stopWatch.Elapsed);
            }
            else
            {
                Console.WriteLine("For Loop: ");
                stopWatch.Start();
                ForLoop(max);
                stopWatch.Stop();
                DisplayElapsedTime(stopWatch.Elapsed);
            }
        }

        private static void WhileLoop(int max)
        {
            int i = 0;
            while (i <= max)
            {
                //Console.WriteLine(i);
                i++;
            };
        }

        private static void ForLoop(int max)
        {
            for (int i = 0; i <= max; i++)
            {
                //Console.WriteLine(i);
            }
        }

        private static void DisplayElapsedTime(TimeSpan ts)
        {
            // Format and display the TimeSpan value.
            string elapsedTime = String.Format("{0:00}:{1:00}:{2:00}.{3:00}",
                ts.Hours, ts.Minutes, ts.Seconds,
                ts.Milliseconds / 10);
            Console.WriteLine(elapsedTime, "RunTime");
        }
    }
