
#include <iostream>
#include <set>

int RandInt(int min, int max) {
    static bool first = true;
    if (first) {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}

template <typename T> class MathSet {

  private:
    std::multiset<T> set;

  public:
    MathSet(){}
    MathSet(int n) { CreateRandomSet(n); }

    MathSet(std::multiset<T> srcSet) { set = srcSet; }

    void RemoveElement(T element) {
        auto itr = set.find(element);
        if (itr != set.end()) {
            set.erase(itr);
        }
    }

    void InsertElement(T element) {
      set.insert(element);
    }

    void CreateRandomSet(int n) {
        for (int i = 0; i < n; ++i) {
            set.insert(RandInt(1, 5));
        }
    }
    // static void PrintSet
    bool isSetMember(T element) {
        return (set.find(element) != set.end());
    }

    MathSet<T> Union(MathSet B) {
      MathSet<T> C;
        for (T element : B.set) {
            C.InsertElement(element);
        }
        for (T element : set) {
            C.InsertElement(element);
        }
	return C;
    }

    MathSet<T> Intersecrtion(MathSet B) {
      MathSet<T> C;
      MathSet<T> Temp(B.set);
        for (T element : set) {
	  if (isSetMember(element) && Temp.isSetMember(element)){
	    C.InsertElement(element);
	    Temp.RemoveElement(element);
	  }
        }
	return C;
    }

    MathSet<T> Complement(MathSet B) {
      MathSet<T> C(set);
      
        for (T element : B.set) {
            if (C.isSetMember(element)) {
                C.RemoveElement(element);
            }
        }
        return C;
    }

    std::multiset<T> GetSet() { return set; }

    void Print() {
        //    std::cout << "{";
        for (T element : set) {
            std::cout
                << element
                << " "; // << ((element == *(GetSet().end() - 1)) ? "}" : ", ");
        }
        std::cout << std::endl;
    }
};
