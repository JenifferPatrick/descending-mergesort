using System;
using System.Diagnostics;

namespace MergeSort
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const int arrayLength = 1_000_000;

            int[] inputArray = new int[arrayLength];

            Random random = new Random();
            for (int i = 0; i < arrayLength; i++)
                inputArray[i] = random.Next();

            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();

            PerformMergeSort(inputArray);

            stopwatch.Stop();

            // Print the first 10 elements of the sorted array
            Console.WriteLine("First 10 elements of the sorted array in descending order:");
            for (int i = 0; i < Math.Min(10, inputArray.Length); i++)
                Console.Write($"{inputArray[i]} ");
            Console.WriteLine("\n...");

            Console.WriteLine($"Sorted {arrayLength:#,#} elements in {stopwatch.Elapsed.TotalMilliseconds} milliseconds");
        }

        private static void PerformMergeSort(int[] arr)
        {
            int length = arr.Length;

            if (length <= 1)
                return; // Base case: array is already sorted

            int middleElementPosition = length / 2;

            // Initialize left and right partitions
            int[] leftPartition = new int[middleElementPosition];
            int[] rightPartition = new int[length - middleElementPosition];

            // Populate the left partition
            for (int i = 0; i < middleElementPosition; i++)
                leftPartition[i] = arr[i];

            // Populate the right partition
            for (int i = middleElementPosition; i < length; i++)
                rightPartition[i - middleElementPosition] = arr[i];

            // Recursively sort the partitions
            PerformMergeSort(leftPartition);
            PerformMergeSort(rightPartition);

            // Merge the sorted partitions
            MergeTwoArrays(arr, leftPartition, rightPartition);
        }

        private static void MergeTwoArrays(int[] originalInputArray, int[] leftPartition, int[] rightPartition)
        {
            int leftSize = leftPartition.Length;
            int rightSize = rightPartition.Length;

            int leftPartitionIterator = 0, rightPartitionIterator = 0, originalArrayIterator = 0;

            // Merge the partitions into the original array in descending order
            while (leftPartitionIterator < leftSize && rightPartitionIterator < rightSize)
            {
                if (leftPartition[leftPartitionIterator] >= rightPartition[rightPartitionIterator])
                    originalInputArray[originalArrayIterator++] = leftPartition[leftPartitionIterator++];
                else
                    originalInputArray[originalArrayIterator++] = rightPartition[rightPartitionIterator++];
            }

            // Add remaining elements from the left partition
            while (leftPartitionIterator < leftSize)
                originalInputArray[originalArrayIterator++] = leftPartition[leftPartitionIterator++];

            // Add remaining elements from the right partition
            while (rightPartitionIterator < rightSize)
                originalInputArray[originalArrayIterator++] = rightPartition[rightPartitionIterator++];
        }
    }
}
