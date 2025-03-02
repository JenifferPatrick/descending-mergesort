
# Merge Sort in C# (Descending Order)

This repository contains a C# implementation of the Merge Sort algorithm to sort an array in **descending order**. The program is optimized to handle large datasets and includes performance measurement using `Stopwatch`.

---

## Features

- **Descending Order Sorting**: The program sorts an array of integers in descending order.
- **Performance Measurement**: Displays the time taken to sort the array.
- **Large Dataset Support**: Handles arrays of size up to 1,000,000 elements efficiently.
- **Customizable Output**: Prints the first few sorted elements for verification.

---

## Getting Started

### Prerequisites

- .NET SDK installed on your machine.
- Basic knowledge of C# and .NET environment.

### Steps to Run the Program

1. Clone the repository or download the source code.

2. Open the project in your favorite C# IDE (e.g., Visual Studio or Visual Studio Code).

3. Build the project to restore dependencies.

4. Run the program to sort a randomly generated array of integers in descending order.

5. View the execution time and the first 10 sorted elements in the console output.

---

## How It Works

### Main Flow

1. **Random Array Generation**: A random integer array of size 1,000,000 is generated.
2. **Merge Sort Execution**: The `PerformMergeSort` method recursively divides the array and sorts each partition.
3. **Merging**: The `MergeTwoArrays` method merges two sorted subarrays into the original array in descending order.
4. **Performance Measurement**: The execution time is calculated using `Stopwatch`.
5. **Output**: The program prints the first 10 elements of the sorted array along with the total time taken.

### Key Functions

1. **`PerformMergeSort(int[] arr)`**:
   - Recursively splits the input array into two smaller subarrays.
   - Sorts each subarray before merging.

2. **`MergeTwoArrays(int[] originalInputArray, int[] leftPartition, int[] rightPartition)`**:
   - Merges two sorted subarrays into the original array in descending order.

---

## Example Output

```plaintext
First 10 elements of the sorted array in descending order:
999994345 999993023 999992834 999992301 999991456 999991245 999991023 999990989 999990845 999990123
...
Sorted 1,000,000 elements in 1234.56 milliseconds
```

---

## Customization

- **Array Size**:
  Modify the `arrayLength` constant in the `Main` method to change the size of the array.

- **Output Length**:
  Adjust the `Math.Min(10, inputArray.Length)` in the `Main` method to print more or fewer elements.

---

## Improvements & Future Work

1. **Parallelization**:
   - Introduce multithreading to enhance performance for large datasets.

2. **Memory Optimization**:
   - Avoid creating new arrays during recursion and instead use indices to define subarray boundaries.

3. **Dynamic Input**:
   - Allow the user to specify the array size and sorting order (ascending or descending).

---

## License

This project is licensed under the MIT License. See the LICENSE file for details.

---

## Contributing

Feel free to fork the repository, make changes, and submit a pull request. Suggestions and improvements are always welcome!

---

## Contact

For any questions or suggestions, please contact:

- **Name**: jeniffer Patrick
- **Email**: jenifferpatrick6@gmail.com

