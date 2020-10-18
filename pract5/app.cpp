#include "app.h"
#include "mathset.h"
#include "dict.h"

void App::Main(){
        std::multiset<int> s;
        s.insert(1);
        s.insert(1);
        s.insert(1);
        s.insert(2);
        MathSet<int> A(s);
        std::multiset<int> r;
        r.insert(1);
        r.insert(1);
        r.insert(0);
        r.insert(2);
        MathSet<int> B(r);
	
        A.Print();
	MathSet<int> C = A.Complement(B);
	MathSet<int> D = A.Intersecrtion(B);
	MathSet<int> F = A.Union(B);
        C.Print();
        D.Print();
        F.Print();

	auto fileContent = WordCounterIO::ReadFile("input");
	auto countedWords = WordCounterIO::CountWords(fileContent);
	WordCounterIO::PrintDictionary(countedWords);
};
