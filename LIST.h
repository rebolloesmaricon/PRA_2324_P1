#ifdef LIST_H
#define LIST_H
template <typename T>
class List {
	public:	
		int size();
		bool empty();
		void insert(int pos, T e);
		void append(T e);
		void prepend(T e);
		T remove(int pos);
		T get(int pos);
		int search(T e);

}
#endif
