# **Endless Loop**  

This program continuously prints numbers from `1` to `30` in a high-speed loop. 
When the number exceeds `30`, it resets back to `1`. The output is printed without delay for maximum speed. 
The program also uses `fflush(stdout)` to make sure that each output is immediately displayed.

## Input
You can change the set value, `30` (manually).

### **How It Works**  
1. **Infinite Loop**:  
   - The program uses a `for(;;)` loop to run infinitely.  
2. **Number Increment**:  
   - The variable `i` starts at `1`, and is incremented with each iteration.  
   - When `i` exceeds `30`, it resets to `1`.  
3. **Immediate Output**:  
   - Each number is printed with `fflush(stdout)` to ensure it appears immediately.  
4. **Optional Delay**:  
   - The loop can be slowed down by uncommenting the `usleep(1000000)` line, which waits 1 second between each iteration (you can change the intervals).

### **Example Run**  
```plaintext
1
2
3
4
...
30
1
2
...
```

### **Main Components**  

#### **Infinite Loop**  
```c
for (;;) //high-speed for loop
{
    printf("%d \n", i);
    fflush(stdout); //Flushes output immediately
    i++;
    if(i > 30) { i = 1; }
    //usleep(1000000); // Uncomment to slow down the loop
}
```

- The `for(;;)` loop runs endlessly.
- `fflush(stdout)` ensures immediate display of the printed numbers.

#### **Optional Delay (usleep)**  
```c
// usleep(1000000); //This slows down the loop, waits 1 second for each iteration
```

- **`usleep(1000000)`**: If enabled (by removing the comment), it introduces a 1-second delay between each number.

### **Notes**  
- **No Delay**: The program runs extremely fast so the CPU usage may spike up instantly.
- **Infinite Loop**: The program runs forever, so wasting system resources.

### **Compilation & Execution**  
```sh
gcc high_speed_loop.c -o high_speed_loop  
./high_speed_loop
```

### **Example Output**  
```sh
1
2
3
4
5
...
30
1
2
...
```

### **Optional Slower Output**  
If the loop is slowed down by uncommenting `usleep`, the output will appear with a 1-second delay between each number. You’ll have:

```sh
1 (after 1 second)
2 (after 1 second)
...
```
-------------
## License
This project is open-source and available under the [MIT License](LICENSE).
