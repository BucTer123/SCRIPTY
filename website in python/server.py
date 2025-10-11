from http.server import SimpleHTTPRequestHandler

PORT = 8080

class MyServer(SimpleHTTPRequestHandler):
    def do_GET(self):
        if self.path == '/':
            self.path = 'main.html'
        elif self.path == '/about':
            self.path = 'main(2).html'
        return super().do_GET()


if __name__ == "__main__":
    server = HTTPServer(('0.0.0.0', PORT), MyServer)
    print(f"RUNNING ON http://localhost:{PORT}")
    server.serve_forever()
