#include "AminoAcid.h"

#ifndef CHAIN_H
#define CHAIN_H

/**
 * Class that serve as blueprint for a protein chain.
 */
class Chain {
    private:
        std::string ID;
        std::list<AminoAcid> Aminoacids;
    public:
        /**
         * Default constructor.
         * Allow instantiation with default attributes.
         */
        Chain();

        /**
         * Specific constructor.
         * Allows instantiation with user defined attributes.
         * Needed parameters: chain id (string).
         */
        Chain(std::string);

        /**
         * Overloaded specific constructor.
         * Also allows the user to instantiate the chain with a list of amino
         * acids.
         */
        Chain(std::string, std::list<AminoAcid>);
        
        /**
         * Mutator for chain id.
         */
        void setID(std::string);

        /**
         * Mutator that add an amino acid to list of amino acids.
         */
        void addAminoAcid(AminoAcid);
        
        /**
         * Accessor that returns chain id.
         */
        std::string getID();

        /**
         * Accessor that returns chain list of amino acids.
         */
        std::list<AminoAcid> getAminoacids();
};

#endif
