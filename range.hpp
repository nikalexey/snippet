
namespace detail
{
	template<class T>
	class range_iter
	{
	public:
		range_iter( const T& iter ): iter_( iter ){}
		bool operator != (const  range_iter& rigth) { return iter_ != rigth.iter_; }
		const T& operator ++() { return ++iter_; }
		const T& operator *() { return iter_; }
	private:
		T iter_;
	};

	template<class T>
	class range_wrap
	{
		using iterator = range_iter<T>;
	public:
		range_wrap( const T& begin, const T& end ): begin_( begin ), end_( end ) { }
		const iterator begin() const { return begin_; }
		const iterator end() const { return end_; }

	private:
		range_iter<T> begin_;
		range_iter<T> end_;
	};
}

template<class T> detail::range_wrap<T> range( const T& start, const T& end ) { return { start, end }; }
template<class T> detail::range_wrap<T> range( const T& end ) { return { T(), end }; }

