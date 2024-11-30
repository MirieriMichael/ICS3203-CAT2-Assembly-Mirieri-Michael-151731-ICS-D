# ICS3203-CAT2-Assembly-Mirieri-Michael-151731-ICS-D
# C Programming Exercise
## Programs Overview

### 1. Control Flow and Conditional Logic**
- **Purpose**: Classifies a user-provided number as **POSITIVE**, **NEGATIVE**, or **ZERO** using branching logic.
- **Key Insight**: Leveraging conditional statements (`if-else`) ensures clear and efficient program flow.

### **2. Array Manipulation with Looping and Reversal**
- **Purpose**: Reverses an array of integers in place using a loop without allocating extra memory.
- **Challenge**: Ensuring memory efficiency by avoiding auxiliary arrays while handling swaps correctly.

### **3. Modular Factorial Calculation**
- **Purpose**: Computes the factorial of a number using a recursive subroutine for modular code design.
- **Challenge**: Managing the stack during recursion is critical. Recursive calls require preserving previous states, which can lead to stack overflow for very large inputs if not handled carefully.

### **4. Data Monitoring and Control**
- **Purpose**: Simulates hardware interaction by controlling a motor and triggering an alarm based on a sensor input.
- **Challenge**: Designing control logic that mirrors real-world sensor-based systems using simulated memory locations.

## **Compilation and Execution Instructions**

1. **Ensure a C Compiler is Installed**:
   - For Windows: Install MinGW and add it to the PATH.
   - For macOS: Install Xcode Command Line Tools.
   - For Linux: Install GCC using your package manager.

2. **Compile the Program**:
   - Open a terminal and navigate to the program's directory.
   - Use the following command to compile a file (e.g., `program.c`):
     ```bash
     gcc program.c -o program
     ```

3. **Run the Program**:
   - Execute the compiled file:
     - On Windows:
       ```bash
       .\program.exe
       ```
     - On macOS/Linux:
       ```bash
       ./program
       ```

4. **Debugging** (Optional):
   - Use `gdb` for debugging:
     ```bash
     gdb ./program
     ```

