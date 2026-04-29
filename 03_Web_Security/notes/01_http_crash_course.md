# Hyper Text Transfer Protocol Crash Course

## 1. The Core Evolution
---

### HTTP 1.0: "The One & Done"
* **The Process**: 1 Request = 1 Connection.
* **The Cost**: Expensive "TCP Handshakes" (the 3-way hello) happen for every tiny file like images or CSS.
* **Hacker POV**: Hard to flood with one connection, but you can crash a server by forcing it to open 10,000 *new* connections at once.

### HTTP 1.1: "The Persistent One"
* **Keep-Alive**: TCP stays open. You do the "expensive hello" once and reuse it for multiple files.
* **Pipelining**: Client screams multiple requests at once without waiting for the first answer.
* **The Flaw (HOL Blocking)**: It’s a "single-lane road." Responses must stay in order. If Request #1 is slow, #2 and #3 are stuck in a traffic jam.

### HTTP 2.0: "The Multiplexing King"
* **Multiplexing**: The real MVP. Turns the road into a multi-lane highway. Pieces of many files travel at once over **one** connection.
* **Binary Protocol**: Data is sent in `010101` chunks called **Frames**. Machine-fast, but looks like gibberish to humans.
* **HPACK**: Compresses headers so we don't resend "I am Chrome" 50 times, saving bandwidth.

### HTTP/3: "The Speed Demon"
* **Goodbye TCP**: It uses **QUIC** (built on **UDP**). 
* **The Benefit**: If one packet gets lost, it doesn't freeze the whole stream. Fastest version for unstable mobile networks.

---

## 2. Key Systems Concepts
---

### Statelessness & State
* **Amnesia**: HTTP is **stateless**. The server forgets who you are the second the request ends.
* **The Fix**: We use **Cookies** or **JWTs** as "ID Cards" so the server recognizes us on the next request.

### Security: TLS (The "S" in HTTPS)
* **The Tunnel**: Wraps HTTP in an encrypted layer.
* **The Goal**: Stops people on your Wi-Fi from "sniffing" your data (Man-in-the-Middle).

---

## 3. Researcher Highlights
> **Self-XSS**: Browsers block console pasting to stop social engineering. Type `allow pasting` to override.
> **Status Code Tip**: `200` means "I got it," `404` means "Not there," and `500` means "The server crashed."

---

## 4. Technical Comparison

| Version | Connection | Main Feature | Major Flaw |
| --- | --- | --- | --- |
| **1.0** | Short-lived | Simple | Latency (Slow) |
| **1.1** | Persistent | Pipelining | Traffic Jams (HOL) |
| **2.0** | Multiplexed | Binary Frames | Complex to debug |
| **3.0** | QUIC (UDP) | Instant Start | Harder to implement |

---

## 5. Checkboxes
- [x] Finished Vid 1: HTTP Crash Course
- [x] Understood 1.1 vs 2.0 (Multiplexing)
- [ ] Practice: Observe a `200 OK` in DevTools
- [ ] Next Up: Vid 2 (HTTP Cookies)