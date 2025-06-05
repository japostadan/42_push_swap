:## Algorithms
## grokking algorithms (Aditya Bhargava)

#### The First Principle
	- What are algorithms?
In the book algorithms are set off instruction for accomplishing a task. These steps are logically defined and followed systemcatically.
	
	- What is it for?
Computer only follows the step by step instructions defined by the programmer.Whatever the instruction set by the programmer.
It involves solving problems in the fewest tries as possible. 
	* example: Try to guess a number from 0 - 100, each guess you get a clue if it is lower or higher, in the fewest tries as possible. If you guess using simple search, which is guessing from 0 until you covered all the possible answer. This will not be efficient beacuse if the number you are guessing is 99., it would take 99 times of tries,
	But try using another approach, start at the middle 50 , this way way you already eliminated 50 wrong guesses. Either it is lower or higher. Then at the next guess choose again the middle number. You can continue this until you only have 1 number.
	Imagine you have to find a word in a dictionary with 240,000 words in it. with simple search it would take 240,000 in worst case. But with binary search it would take only 18 steps. It is a very large difference.

In general, for any list of n, binary search will take log2 n steps to run in worst case, whereas simple search will take n steps.
	Binary Search is one of the algorithm that can make a huge difference in solving a problem. This is why algorithm are very usefull in our lives. We decribe the efficiency of the algorithm by the Big O notation.
Big O notation describe how quickly the algorithm grows in terms of its runtime and as the input size grows.

	- Why we need algorithms?
In our modern day solving complex promblems is easier because of algorithms, We are able to break down large problems into smaller pieces. This way we can save time, do things automatically, and get consistent results.

### How will we measure the efficiency of algorithms

* How effective they are in terms of time and space to solve a problems. We use a the Big O notation for this.
Algorithm speed is not measured in seconds, but in growth of the number of operations. Instead how quick the run time of algorithm increases as the size of the input operations increases.

