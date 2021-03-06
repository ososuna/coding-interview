# Arrays and Strings
## Hash Tables
A hash table is a data structure that maps keys to values for highly efficient lookup. There are a number of ways of implementing this.
## ArrayList and Resizable Arrays
In some languages, arrays (often called lists in this case) are automatically resizable. The array or list will grow as you append items. In other languages, like Java, arrays are fixed length. The size is defined when you create the array.
When you need an array-like data structure that offers dynamic resizing, you would usually use an Arraylist.
An Arraylist is an array that resizes itself as needed while still providing 0(1) access. A typical implementation is that when the array is full, the array doubles in size. Each doubling takes 0(n) time, but happens so rarely that its amortized insertion time is still O (1).

```java
Arraylist<String> merge(String[] words, String[] more) {
  Arraylist<String> sentence= new Arraylist<String>();
  for (String w: words) sentence.add(w);
  for (String w: more) sentence.add(w);
  return sentence;
}
```
This is an essential data structure for interviews. Be sure you are comfortable with dynamically resizable arrays/lists in whatever language you will be working with. Note that the name of the data structure as well as the "resizing factor" (which is 2 in Java) can vary.
## StringBuilder