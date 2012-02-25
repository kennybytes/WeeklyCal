#include "common.h"

inline Container::Container()
/*  initialize a Container object
 *  pre:  none
 *  post: Container has been created and initialized to empty
 */
{count=0;}

inline Entry Container::get(Position p) const
/*  return entry at position p
    pre:  Container has been created, and 0 <= p < n, where n is number
	of Container entries
    post: entry at position p has been returned as x, Container unchanged
    error: if Container is shorter than p, nothing done an waring produced.
*/
{
	verify(p,0,count-1,"get");
	return elements[p];
}

inline void Container::replace(Entry x, Position p)
/*  replace entry at position p with x
    pre:  Container has been created, and 0 <= p < n, where n is number
	of Container entries
    post: entry at position p has been replaced with x, other entries unchanged
    error: if Container is shorter than p, nothing done an waring produced.
*/
{
	verify(p,0,count-1,"replace");
	elements[p]=x;
}

inline void Container::clear()
/*  clear a Container object
    pre:  Container has been created
    post: all entries have been removed; Container is empty
 */
{
	count = 0;
}
inline bool Container::isempty() const
/*  tests if a Container is empty
    pre:  Container has been created
    post: returns true if Container is empty; false otherwise
 */
{return(count==0);}

inline bool Container::isfull() const
/*  tests if a Container is full
    pre:  Container has been created
    post: returns true if Container is full; false otherwise
 */
{
	return (count==MAXSIZE);
}

inline int Container::size() const
/*  determines the size of a Container
    pre:  Container has been created
    post: returns the number of entries in the Container
 */
{
	return count;
}
inline void Container::traverse(void(*Visit)(Entry))
/*  applies the operation Visit to each element of the Container
    pre: Container has been created; Visit is a function that processes
	elements of type Entry. Visit does not modify the Container.
    post: the action Visit has been applied to each element in the Container
	begining at the first
 */
{
	for(int i=0;i<count;i++)
		Visit(elements[i]);
}
inline void Container::verify(int x, int lo, int hi, const char *msg) const
{
//	if(x < lo || x > hi)
//	fprintf(stderr, "Warning: Bad index sent to %s: %i\n",msg,x);
}
