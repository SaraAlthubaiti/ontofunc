
#include "go_obj.h"

/***********
 * contains information of a single gene:
 * Name, data, annotation
 ************/
class gene {
	public:
		/********
                 * name_ == name of gene
		 * gos == groups gene is annotated to (including subsumtion)
		 *********/
		gene( string name_, set<go_obj*> &gos_ ) : name( name_ ), gos(gos_),
				ch_s(0), ch_ns(0), hh_s(0), hh_ns(0) 
		{  }

		/**********
                 * adds data to GO groups, including information 
		 * that a gene is annotated to the group and save data to 
		 * private ch_s..hh_ns
		 ***********/
		void add( int ch_s_, int ch_ns_, int hh_s_, int hh_ns_ ) ;
		string name ;
		set<go_obj*>* get_gos(  ) ;

		/**********
		 * adds data to GO groups
		 ***********/
		void write_data_gos( set<go_obj*>* gos_ ) ;

		
		
	private:
		set<go_obj*> gos ;
		int ch_s, ch_ns, hh_s, hh_ns ;
} ;
