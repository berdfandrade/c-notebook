#include <websocketpp/config/asio_no_tls.hpp>
#include <websocketpp/server.hpp>
#include <iostream>

using namespace std;

typedef websocketpp::server<websocketpp::config::asio> server;

void on_message(websocketpp::connection_hdl hdl, server::message_ptr msg) {
    cout << "Received message: " << msg->get_payload() << endl;

    // Envia uma resposta para o cliente
    server::connection_ptr con = server::connection_ptr(new websocketpp::connection<websocketpp::config::asio>(hdl));
    con->send("Server received: " + msg->get_payload(), websocketpp::frame::opcode::text);
}

int main() {
    server websocketServer;

    // Define o callback de mensagem recebida
    websocketServer.set_message_handler(&on_message);

    // Inicia o servidor WebSocket
    websocketServer.init_asio();
    websocketServer.listen(9002);
    websocketServer.start_accept();

    cout << "WebSocket server started on port 9002" << endl;

    // Executa o loop de eventos
    websocketServer.run();

    return 0;
}
