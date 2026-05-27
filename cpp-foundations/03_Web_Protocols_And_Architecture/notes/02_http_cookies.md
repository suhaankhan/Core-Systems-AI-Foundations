# HTTP Cookies Crash Course (Hussein Nasser)

## Section 1: Creating Cookies
---
* **The Stateless Problem**: HTTP doesn't remember you; every request is a "first meeting."
* **The Solution**: **Cookies** act as a "wristband" or "ID tag."
* **The Workflow**:
    1. **Request**: Client sends credentials or hits a page.
    2. **Response**: Server validates and sends `Set-Cookie: name=value` header.
    3. **Storage**: Browser saves it in the local **Cookie Jar**.
    4. **Automatic Transmission**: Browser sends the cookie back in the `Cookie` header for every subsequent request to that domain.

---

## Section 2: Cookie Properties
---
* **Domain**: Determines which host can receive the cookie (e.g., `example.com`).
* **Path**: Restricts the cookie to a specific URL path (e.g., `/admin`).
* **Expires**: A specific hard date/time for when the cookie is deleted.
* **Max-Age**: Lifetime of the cookie in seconds relative to creation.
* **Size**: Capped at **4KB**. If you exceed this, the browser may drop the cookie.

---

## Section 3: Cookie Types
---
### Persistence vs. Source
* **Session Cookies**: No `Expires` or `Max-Age` set; stays in RAM and dies when the tab/browser closes.
* **Persistent Cookies**: Saved to Disk; survives browser restarts until it expires.
* **First-Party**: Created by the domain you are visiting (matches the URL bar).
* **Third-Party**: Created by a different domain (e.g., an ad tracker like `doubleclick.net`).

| Cookie Type | Storage | Persistence |
| :--- | :--- | :--- |
| **Session** | RAM | Until tab closes |
| **Persistent** | Disk | Until Max-Age/Expiry |

---

## Section 4: Cookie Security
---
### Critical Security Flags
* **`HttpOnly`**: 
    * **Function**: Blocks JavaScript (`document.cookie`) from accessing the data.
    * **Researcher Note**: Primary defense against **XSS (Cross-Site Scripting)** session theft.
* **`Secure`**: 
    * **Function**: Cookie is only sent over encrypted **HTTPS** connections.
    * **Researcher Note**: Prevents **MitM (Man-in-the-Middle)** sniffing on public Wi-Fi.
* **`SameSite`**: 
    * **Function**: Controls cross-domain behavior to prevent **CSRF (Cross-Site Request Forgery)**.
    * `Strict`: Never sent on cross-site requests.
    * `Lax`: Default; sent when clicking a link to the site.
    * `None`: Sent with everything (requires `Secure`).

> **Researcher Note**: When auditing a target, check the **Application** tab in DevTools. If you see a `sessionID` missing `HttpOnly`, it is a high-priority finding because any XSS bug can then lead to full account takeover.

---

## 5. Technical Snippets (CRITICAL)
---
**Server setting the session:**
```http
HTTP/1.1 200 OK
Content-Type: text/html
Set-Cookie: session_id=suhaan_101; HttpOnly; Secure; SameSite=Lax\
```

**Browser automatically returning the session:**
```http
GET /api/user/profile HTTP/1.1
Host: server.com
Cookie: session_id=suhaan_101
```

---

## 6. Comparison Table: Core Cookie Attributes
---

| Attribute | Purpose | Hacker Impact |
| :--- | :--- | :--- |
| **Domain** | Scope of cookie | Can allow sub-domain takeover |
| **HttpOnly** | Block JS access | Stops XSS session theft |
| **Secure** | HTTPS only | Stops network sniffing |
| **SameSite** | Cross-site control | Stops CSRF attacks |

---