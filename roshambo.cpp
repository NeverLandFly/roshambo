#include <utility>
#include <vector>
#include <string>
#include <eosiolib/eosio.hpp>
#include <eosiolib/time.hpp>
#include <eosiolib/asset.hpp>
#include <eosiolib/contract.hpp>
#include <eosiolib/crypto.h>

using eosio::indexed_by;
using eosio::const_mem_fun;
using eosio::asset;
using eosio::permission_level;
using eosio::action;
using eosio::print;
using eosio::name;

using namespace eosio;

class roshambo: public eosio::contract{
    public:
    using contract::contract;

    /// @abi action
    void hi(account_name user){
        require_auth(user);
        print( "Hello, ", name{user});
    }

    //@abi action
    void deposit(const account_name from, const asset& quantity){

    }
};

EOSIO_ABI(roshambo, (hi))