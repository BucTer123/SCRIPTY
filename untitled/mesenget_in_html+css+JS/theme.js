const themeToggle = document.getElementById('theme-toggle');

    themeToggle.addEventListener('click', (e) => {
        document.body.classList.toggle('dark');
    });
