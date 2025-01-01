# Important Tips

* Don't use ``str = str + some_string[i]`` because of some ``C++`` problems. Rather prefer to use ``str.push_back(some_string[i])``. This is just faster in terms of ``C++`` and you don't add a character to a string, which is good again.

* Use ``getline()`` function to get string input, that's just better if you want a full line. Otherwise, use ``cin``, everything is fine.

* Use of ``long long`` is just better for humongous input values. Don't use ``int``, doesn't work in Competitive Programming.

* If you have to print something modulo $10^9 + 7$, then make sure you keep reducing the number modulo, so that you don't get some overflow error. Basically, if you are multiplying first, then taking modulo at the end, then you can have overflow errors. Keep taking moduli, so that you are safe with overflow errors at least.

* Use ``b>>1`` to divide by ``2``, since this is a bit-wise operator, its generally faster than normal/mathematical ones. Also, if ``b&1`` evaluates to ``0``, then ``b`` is even. This is faster, since bitwise operator.

* Here's some useful syntax for competitive programming in general.

```cpp
typedef long long ll;
const long long MOD = 1e9 + 7;
cont int mxA = 1e6; // used to store constraints of variable A.
// will add more, as I learn.
```