#pragma once
#include <iostream>
#include <iterator> 
#include <map>


template <typename i, class T>

class map_template 
{
private:
	std::map <i, T> mapa;
public:
	void Add(i idd ,T obj)
	{
		this->mapa[idd] = obj;
	}
	T* Find(i idd)
	{	
		auto search = this->mapa.find(idd);
		return &(search->second);
	}
	friend ostream& operator<<(std::ostream& stream, const map_template map)
	{
		for (auto it = map.mapa.begin(); it != map.mapa.end(); ++it)
			stream << it->first << ": " << it->second << endl;
		return stream;
	}
	
	
};