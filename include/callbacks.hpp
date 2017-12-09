//
// Created by jestjest on 11/30/17.
//

#ifndef SIMPLE_KADEMLIA_CALLBACKS_HPP
#define SIMPLE_KADEMLIA_CALLBACKS_HPP

#include <node/nodeinfo.hpp>

namespace kdml {
    using Nodes = std::vector<NodeInfo>;
    using rpc_callback = std::function<void(std::shared_ptr<kdml::net::Message> req)>;
    using GetCallback = std::function<void(Nodes)>;
    using SimpleCallback = std::function<void(bool failure)>;
    //todo: findvalue callback returns either list of nodes or value
}

#endif //SIMPLE_KADEMLIA_CALLBACKS_HPP