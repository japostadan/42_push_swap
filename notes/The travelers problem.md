# Traveling salesperson

You might have read that last section and thought, “There’s no way I’ll
ever run into an algorithm that takes O(n!) time.” Well, let me try to
prove you wrong! Here’s an example of an algorithm with a really bad
running time. This is a famous problem in computer science, because
its growth is appalling and some very smart people think it can’t be
improved. It’s called the traveling salesperson problem.
The salesperson has to go to five cities.
This salesperson, whom I’ll call Opus, wants to hit all five cities while
traveling the minimum distance. Here’s one way to do that: look
at every possible order in which he could travel to the cities.
He adds up the total distance and then picks the path with the
lowest distance. There are 120 permutations with 5 cities, so it will
take 120 operations to solve the problem for 5 cities. For 6 cities, it
will take 720 operations (there are 720 permutations). For 7 cities,
it will take 5,040 operations!
In general, for n items, it will take n! (n factorial) operations to
compute the result. So this is O(n!) time, or factorial time. It takes a
lot of operations for everything except the smallest numbers. Once
you’re dealing with 100+ cities, it’s impossible to calculate the answer in
time—the Sun will collapse first.
This is a terrible algorithm! Opus should use a different one, right? But
he can’t. This is one of the unsolved problems in computer science.
There’s no fast known algorithm for it, and smart people think it’s
impossible to have a smart algorithm for this problem. The best we can
do is come up with an approximate solution;

