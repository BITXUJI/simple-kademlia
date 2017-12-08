/*
 *
 * This defines a library using boost::asio and cereal that sends messages
 * as UDP packets. Each Kademlia node uses this library to communicate
 * with each other.
 *
 * Example usage:
 * ---------------------
 * KademliaNodeInfo local(...);
 * KademliaProtocol protocol(local);
 * protocol.sendMessage(KademliaNodeInfo dest, kdml::net::Message message);
 * protocol.sendMessage(KademliaNodeInfo dest, kdml::net::Message message);
 */

#include "routing tree/kademlianodeinfo.hpp"
#include <boost/asio.hpp>
#include <messages/message.hpp>

namespace kdml {
    class KademliaProtocol {
        KademliaNodeInfo owner;
//        void sendPing();

    public:
        explicit KademliaProtocol(KademliaNodeInfo owner);

        void sendMessage(net::Message& msg, KademliaNodeInfo& dest);

    };
}

//
//// RPCs
//// returns k KademliaNodeInfo structs closest to key/ID, NOT RECURSIVE
//// callback: contains (value, list of k nodes)
//findNode(key);
//findValue(key);  // If receiver has id in hashtable, return value.
//
//// empty callback
//ping();
//
//// stores key value at given node
//store(key, value);
//
//// returns k KademliaNodeInfo structs closest to key
//// A = 1
//findKClosestNodes(id) {
//        // keep track of closest node
//        // keep PriorityQueue of k closest nodes not queried
//
//        // pick A nodes from closest non-empty bucket
//            // pick from next closest buckets until A nodes
//        // send findNode RPC to A nodes
//
//        // on response from each node, pick A nodes from k received not yet queried
//            // send findNode RPC again to A nodes
//            // if these don't return closer nodes, query first k in PQueue
//        // finish when have received responses from k closest nodes
//}
