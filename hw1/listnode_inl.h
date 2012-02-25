// file: listnode_inl.h
// date: 2/14/12
//



inline Entry ListNode::getdata() const
{ return entry; }


inline ListNode *ListNode::getnext() const
{ return next;}

inline void ListNode::setdata(Entry x)
{
 printf("Debug");
 entry = x; }

inline void ListNode::setnext(ListNode *n)
{ next = n; }



