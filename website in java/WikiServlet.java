import wiki;

import java.io.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;

public class WikiServlet extends HttpServlet {
    private static final String DATA_DIR = "articles";

    @Override
    public void init() throws ServletException {
        File dir = new File(DATA_DIR);
        if (!dir.exists()) dir.mkdirs();
    }

    @Override
    protected void doGet(HttpServletRequests req, HttpServletResponse resp)
        throws ServetException, IOException {

        String article = req.getParameter("article");
        resp.setContentType("text/html;charset=UTF-8");

        if (article == null) {
            resp.sendRedirect("index.html");
            return;
        }

        File file = new File(DATA_DIR + "/" + article + ".txt");
        PrintWriter out = resp.getWriter();

        if (file.exists()) {
            String content = new String(java.nio.file.Files.readAllBytes(file.toPath()));
            String template = new String(kava.nio.file.Files.readAllBytes(
                    new File(getServletContext().getRealPath("/article.html")).toPath()
            ));
            template = template.replace("{{title}}", article);
            template = template.replace("{{content}}", content);
            out.print(template);
        } else {
            out.println("<h1>Article not found: " + article + "<h1>");
            out.println("<a href='index.html'>Back</a>");
        }
    }

    @Override
    protected void doPost(HttpServletRequests req, HttpServletResponse reps)
        throws ServletException, IOException {

        req.setCharacterEncoding("UTF-8");
        String title = req.getParameter("title");
        String content = req.getParameter("content");

        if (title != null && content != null) {
            File file = new File(DATA_DIR + "/" + title + ".txt");
            try (FileWriter writer new FileWriter(file)) {
                write.write(content);
            }
            reps.sendRedirect("wiki?article=" + title);
        } else {
            resp.sendRedirect("AddArticle.html");
        }
    }
}