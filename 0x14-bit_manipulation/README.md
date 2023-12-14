===================================0x14. C - Bit manipulation============================================

Bit manipulation involves manipulating individual bits in a binary number to perform various operations, such as setting, clearing, flipping, or extracting specific bits. This is often used in low-level programming, embedded systems, and when working with hardware interfaces. Bit manipulation can also be used in various algorithms and optimizations. Here are some common bit manipulation operations:

1. **Setting a Bit (Bitwise OR):** To set a specific bit to 1, you can use the bitwise OR operator (`|`). For example, to set the 3rd bit of a number `x`, you can do:

   ```c
   x = x | (1 << 3);
   ```

2. **Clearing a Bit (Bitwise AND with Complement):** To clear a specific bit, you can use the bitwise AND operator (`&`) with the complement of a bit. For example, to clear the 4th bit of a number `x`, you can do:

   ```c
   x = x & ~(1 << 4);
   ```

3. **Toggling a Bit (Bitwise XOR):** To toggle (invert) a specific bit, you can use the bitwise XOR operator (`^`). For example, to toggle the 2nd bit of a number `x`, you can do:

   ```c
   x = x ^ (1 << 2);
   ```

4. **Checking a Bit (Bitwise AND):** To check the value of a specific bit, you can use the bitwise AND operator. For example, to check if the 5th bit of a number `x` is set (1), you can do:

   ```c
   if (x & (1 << 5)) {
       // The 5th bit is set.
   }
   ```

5. **Shifting Bits:** You can shift the bits of a number left (`<<`) or right (`>>`) to perform multiplication or division by powers of 2, respectively.

   ```c
   x = x << 2;  // Shift left by 2 bits (multiply by 4).
   x = x >> 1;  // Shift right by 1 bit (divide by 2).
   ```

6. **Bit Counting:** You can count the number of set bits (1s) in a binary number using techniques like Brian Kernighan's Algorithm or lookup tables.

7. **Bit Masks:** Bit masks are used to extract or manipulate specific groups of bits in a number. For example, to extract the lowest 4 bits of a number `x`, you can use a mask:

   ```c
   int mask = 0x0F;  // Mask with the lowest 4 bits set.
   int result = x & mask;
   ```

Bit manipulation can be used in various programming languages, not just in C. It's also important to note that bit manipulation can be error-prone, so it's essential to document and test your code thoroughly.
