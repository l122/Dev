// Source https://edabit.com/challenge/gYxDahmv8CbWmiThc
// Create a function that takes a string as its argument and returns the string in reversed order.
// Examples: 
// reverse("Hello World") ➞ "dlroW olleH"
// reverse("The quick brown fox.") ➞ ".xof nworb kciuq ehT"
// reverse("Edabit is really helpful!") ➞ "!lufpleh yllaer si tibadE"

#include <iostream>

void reverse(const char * s)
{
    //std::cout << "&s = " << &s << ", *s = " << *s << std::endl;

    if (*s)
    {
        reverse(s+1);
        std::cout << *s; 
    }
}

int main(int argc, char ** argv)
{
    std::cout << "Hello!" << " --->>> "; 
    reverse("Hello!");
    std::cout << std::endl;

    return 0;
}
/*
It(test1){Assert::That(reverse("Think different."), Equals(".tnereffid knihT"));}
  It(test2){Assert::That(reverse("It doesnt make sense to hire smart people and tell them what to do; we hire smart people so they can tell us what to do."), Equals(".od ot tahw su llet nac yeht os elpoep trams erih ew ;od ot tahw meht llet dna elpoep trams erih ot esnes ekam tnseod tI"));}
  It(test3){Assert::That(reverse("Innovation is the ability to see change as an opportunity - not a threat"), Equals("taerht a ton - ytinutroppo na sa egnahc ees ot ytiliba eht si noitavonnI"));}
  It(test4){Assert::That(reverse("Everything is based on a simple rule: Quality is the best business plan."), Equals(".nalp ssenisub tseb eht si ytilauQ :elur elpmis a no desab si gnihtyrevE"));}
  It(test5){Assert::That(reverse("The people who are crazy enough to think they can change the world are the ones who do."), Equals(".od ohw seno eht era dlrow eht egnahc nac yeht kniht ot hguone yzarc era ohw elpoep ehT"));}
  It(test6){Assert::That(reverse("Dont let the noise of others opinions drown out your own inner voice."), Equals(".eciov renni nwo ruoy tuo nword snoinipo srehto fo esion eht tel tnoD"));}
  It(test7){Assert::That(reverse("Learn continually; Theres always one more thing to learn."), Equals(".nrael ot gniht erom eno syawla serehT ;yllaunitnoc nraeL"));}
  It(test8){Assert::That(reverse("Quality is more important than quantity. One home run is much better than two doubles."), Equals(".selbuod owt naht retteb hcum si nur emoh enO .ytitnauq naht tnatropmi erom si ytilauQ"));}
  It(test9){Assert::That(reverse("Your time is limited so dont waste it living someone elses life."), Equals(".efil sesle enoemos gnivil ti etsaw tnod os detimil si emit ruoY"));}
    It(test10){Assert::That(reverse("The only way to be truly satisfied is to do what you believe is great work."), Equals(".krow taerg si eveileb uoy tahw od ot si deifsitas ylurt eb ot yaw ylno ehT"));}
*/