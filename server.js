const express = require('express');
const app = express();
const cors = require('cors');
const mongoose = require('mongoose');

app.use(cors());
app.use(express.json());

mongoose.connect("mongodb+srv://michaelyu713705:T2MX4ecvmdxYddGv@lumigui.xixpy6e.mongodb.net/lumigui")
//mongoose.connect("mongodb://localhost:27017/lumigui", { useNewUrlParser: true, useUnifiedTopology: true });

app.use("/", require("./routes/patientRoute"));

app.listen(3001, function() {
  console.log('Server started on port 3001');
});

