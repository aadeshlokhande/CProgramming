let tasks = JSON.parse(localStorage.getItem("tasks")) || [];

function saveTasks() {
    localStorage.setItem("tasks", JSON.stringify(tasks));
}

function addTask() {
    const text = taskInput.value.trim();
    if (!text) return alert("Task required");

    tasks.push({
        id: Date.now(),
        text,
        date: dateInput.value,
        priority: priorityInput.value,
        completed: false
    });

    taskInput.value = "";
    saveTasks();
    renderTasks();
}

function deleteTask(id) {
    tasks = tasks.filter(t => t.id !== id);
    saveTasks();
    renderTasks();
}

function toggleTask(id) {
    tasks = tasks.map(t =>
        t.id === id ? { ...t, completed: !t.completed } : t
    );
    saveTasks();
    renderTasks();
}

function editTask(id) {
    const task = tasks.find(t => t.id === id);
    const newText = prompt("Edit task", task.text);
    if (newText) {
        task.text = newText;
        saveTasks();
        renderTasks();
    }
}

function renderTasks() {
    const list = document.getElementById("taskList");
    const filter = document.getElementById("filter").value;
    const search = document.getElementById("search").value.toLowerCase();

    list.innerHTML = "";

    tasks
        .filter(t =>
            (filter === "all" ||
            (filter === "completed" && t.completed) ||
            (filter === "pending" && !t.completed))
        )
        .filter(t => t.text.toLowerCase().includes(search))
        .sort((a, b) => b.id - a.id)
        .forEach(task => {
            const li = document.createElement("li");
            li.className = task.completed ? "completed" : "";
            li.style.borderLeftColor =
                task.priority === "High" ? "red" :
                task.priority === "Medium" ? "orange" : "green";

            li.innerHTML = `
                <strong>${task.text}</strong><br>
                📅 ${task.date || "No date"} | ⚡ ${task.priority}
                <div class="actions">
                    <button onclick="toggleTask(${task.id})"> Done </button>
                    <button onclick="editTask(${task.id})"> Edit </button>
                    <button onclick="deleteTask(${task.id})"> Delete </button>
                </div>
            `;
            list.appendChild(li);
        });
}

renderTasks();