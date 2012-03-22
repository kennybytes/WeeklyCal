/*
 *
 * Inline Declarations for name class
 *
 *
 */


/*
 *
 * Constructors
 *
 */

inline Name::Name(){
	SetName("NULL");
}
inline void Name::Init(Word name){ 
	SetName(name); 
}

inline void Name::Clear(){
	SetName("NULL");
}

inline void Name::Copy(Name &source){
	SetName(GetName());
}

inline Word Name::GetName() const{
	return name;
}

inline void Name::SetName(Word name){
	this->name = name;
}
inline void Name::SetName(Name person){
	this->name = person.GetName();

}
inline void Name::Display(){
	printf("%s", name.c_str());
}

inline bool Name::operator==(const Name b) const{	
	return(!name.compare(b.name));
}
inline bool Name::operator!=(const Name b) const {
	return !(name==b.name);
}

inline void Name::ChangeName(Word name){
	SetName(name);
}
